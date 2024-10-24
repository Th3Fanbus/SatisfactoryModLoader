// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGNewsFeedActor.h"
#include "Internationalization/StringTableRegistry.h"

AFGNewsFeedActor::AFGNewsFeedActor() : Super() {
	this->mNewFeedText = INVTEXT("");
	this->mNewsFeedRequestFailedText = INVTEXT("Unable to fetch News Feed.");
	this->mNewsFeedURLs.Emplace();
	this->mNewsFeedURLs[0].GameVersion = EGameVersion::GV_Main;
	this->mNewsFeedURLs[0].URL = TEXT("http://ingamenews.satisfactorygame.com/main.news");
	this->mNewsFeedURLs.Emplace();
	this->mNewsFeedURLs[1].GameVersion = EGameVersion::GV_Experimental;
	this->mNewsFeedURLs[1].URL = TEXT("http://ingamenews.satisfactorygame.com/experimental.news");
	this->mNewsFeedURLs.Emplace();
	this->mNewsFeedURLs[2].GameVersion = EGameVersion::GV_Other;
	this->mNewsFeedURLs[2].URL = TEXT("http://ingamenews.satisfactorygame.com/other.news");
	this->mNewsFeedURLs.Emplace();
	this->mNewsFeedURLs[3].GameVersion = EGameVersion::GV_ClosedBeta;
	this->mNewsFeedURLs[3].URL = TEXT("http://ingamenews.satisfactorygame.com/closed_beta.news");
}
void AFGNewsFeedActor::BeginPlay(){ Super::BeginPlay(); }
FString AFGNewsFeedActor::GetNewsFeedURL(){ return FString(); }
void AFGNewsFeedActor::OnResponseReceived(FHttpRequestPtr request, FHttpResponsePtr response, bool wasSuccessful){ }
