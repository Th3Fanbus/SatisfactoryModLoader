// This file has been manually implemented by Th3Fanbus

#include "FGWorldPartitionRuntimeSpatialHash.h"

#if WITH_EDITOR
uint32 UFGWorldPartitionRuntimeSpatialHash::GetGridCellSize(FName GridName)
{
	if (const FSpatialHashStreamingGrid* Grid = GetStreamingGridByName(GridName)) {
		return Grid->CellSize;
	}
	return 0;
}

bool UFGWorldPartitionRuntimeSpatialHash::PopulateGeneratorPackageForCook(const TArray<FWorldPartitionCookPackage*>& PackagesToCook, TArray<UPackage*>& OutModifiedPackage)
{
	return Super::PopulateGeneratorPackageForCook(PackagesToCook, OutModifiedPackage);
}
#endif

bool UFGWorldPartitionRuntimeSpatialHash::InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase* ExternalStreamingObject)
{
	const bool Result = Super::InjectExternalStreamingObject(ExternalStreamingObject);
	if (Result) {
		mNameToCellMapDirty = true;
	}
	return Result;
}

bool UFGWorldPartitionRuntimeSpatialHash::RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase* ExternalStreamingObject)
{
	const bool Result = Super::RemoveExternalStreamingObject(ExternalStreamingObject);
	if (Result) {
		mNameToCellMapDirty = true;
	}
	return Result;
}

UWorldPartitionRuntimeCell* UFGWorldPartitionRuntimeSpatialHash::FindCellByName(FName cellName) const
{
	if (mNameToCellMapDirty) {
		// FIXME: No idea if the editor-only functions need to set mNameToCellMapDirty to true
		RebuildNameToCellMap();
		mNameToCellMapDirty = false;
	}

	UWorldPartitionRuntimeCell** CellPtr = mNameToCellMap.Find(cellName);
	return CellPtr ? *CellPtr : nullptr;
}

void UFGWorldPartitionRuntimeSpatialHash::RebuildNameToCellMap() const
{
	mNameToCellMap.Empty();
	ForEachStreamingCells([this](const UWorldPartitionRuntimeCell* Cell) {
		mNameToCellMap.Add(Cell->GetFName(), const_cast<UWorldPartitionRuntimeCell*>(Cell));
		return true;
	});
}
