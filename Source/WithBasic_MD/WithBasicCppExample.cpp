#include "WithBasicCppExample.h"
#include "DrawDebugHelpers.h"

AWithBasic_MDCppExample::AWithBasic_MDCppExample ()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<UScreenComponent>(TEXT("RootComponent"));
	Pipeline = CreateDefaultSubobject<UMediaPipePipelineComponent>(TEXT("Pipeline"));
	Observer = CreateDefaultSubobject<UMediaPipeLandmarkObserverComponent>(TEXT("Observer"));

	Pipeline->PipelineName = TEXT("pipe0");
	Pipeline->GraphNodes = TEXT("pose_landmarks");

	Observer->PipelineName = TEXT("pipe0");
	Observer->StreamName = TEXT("pose_world_landmarks");
	Observer->LandmarkListType = EMediapipeLandmarkListType::LandmarkList;
	Observer->AxisX = TEXT("pipe0");
	Observer->AxisY = TEXT("pipe0");
	Observer->AxisZ = TEXT("pipe0");
	Observer->WorldScale = TEXT("pipe0");
	Observer->MinVisibility = TEXT("pipe0");
	Observer->MinPresence = TEXT("pipe0");
}