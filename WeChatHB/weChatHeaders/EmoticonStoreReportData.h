//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface EmoticonStoreReportData : MMObject
{
}

+ (id)safeReportString:(id)arg1;
+ (void)ReportDesignerEmojiTipsWithScene:(unsigned int)arg1 action:(unsigned long long)arg2 Md5:(id)arg3 searchId:(unsigned long long)arg4 designerId:(id)arg5 pid:(id)arg6 emoticonScene:(long long)arg7;
+ (void)ReportCellSetWithId:(unsigned int)arg1 Name:(id)arg2 SetType:(unsigned int)arg3 Action:(unsigned long long)arg4;
+ (void)ReportRecentHotItemWithPid:(id)arg1 Action:(unsigned long long)arg2;
+ (void)ReportOpenPageFromWebviewWithPageType:(unsigned long long)arg1 AndPid:(id)arg2 DesignerId:(id)arg3 ReqType:(unsigned int)arg4 Version:(unsigned int)arg5 searchId:(unsigned long long)arg6;
+ (void)ReportDoSearchForKeyword:(id)arg1 InScene:(unsigned long long)arg2;
+ (void)ReportStartSearchInScene:(unsigned long long)arg1;
+ (void)ReportEmoticonDownloadScene:(long long)arg1 Type:(long long)arg2 LayerId:(id)arg3 ProductId:(id)arg4 reportInfo:(id)arg5;
+ (void)ReportEmoticonDownloadScene:(long long)arg1 Type:(long long)arg2 LayerId:(id)arg3 ProductId:(id)arg4;
+ (void)ReportEmoticonPageExposure:(unsigned int)arg1 desiger:(unsigned int)arg2 pid:(id)arg3 tid:(unsigned int)arg4 extrance:(long long)arg5 newPage:(long long)arg6;
+ (void)ReportEmoticonPageExposure:(long long)arg1 newPage:(long long)arg2;
+ (void)ReportEmoticonBrowsePageExposure:(id)arg1 activityID:(id)arg2 pid:(id)arg3 designerUin:(id)arg4;
+ (void)ReportEmoticonTopicPageExposure:(unsigned int)arg1 extrance:(long long)arg2;
+ (void)ReportEmoticonDesignerPageExposure:(unsigned int)arg1 extrance:(long long)arg2;
+ (void)ReportEmoticonDetailPageExposure:(id)arg1 extrance:(long long)arg2;
+ (void)ReportRewardTipsAction:(unsigned long long)arg1 ForPid:(id)arg2;
+ (void)ReportRewardForPid:(id)arg1 scene:(unsigned long long)arg2 extranceScene:(long long)arg3 action:(unsigned long long)arg4;
+ (void)markReportSendEmoticonFromNowUseButton;
+ (void)changeToolViewStateToNoneEmoticon;
+ (void)changeEmoticonBoardIndex;
+ (void)ReportSendEmoticonFromNowUseButton:(id)arg1;
+ (void)ReportClickNowUseButton:(id)arg1;
+ (void)ReportClickCollectionCellForReqType:(unsigned int)arg1;
+ (void)ReportClickEmoticonNew;
+ (void)ReportClickEmoticonFromDesc:(id)arg1 expId:(id)arg2 index:(unsigned int)arg3 md5:(id)arg4 totalCount:(unsigned long long)arg5;
+ (void)ReportShowDescToEmoticon:(id)arg1 expId:(id)arg2 totalCount:(unsigned long long)arg3;
+ (void)ReportClickEmoticonShareFromTimeline:(id)arg1;
+ (void)ReportClickEmoticonShareFromMessage:(id)arg1;
+ (void)ReportEmoticonShareToTimeline:(id)arg1;
+ (void)ReportEmoticonShareToFriends:(id)arg1;

@end

