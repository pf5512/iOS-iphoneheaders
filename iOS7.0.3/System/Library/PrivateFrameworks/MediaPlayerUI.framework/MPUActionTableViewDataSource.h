/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MPUActionTableViewDataSource <UITableViewDataSource>
@required
-(int)dataSourceIndexForIndexPath:(id)arg1;
-(id)indexPathForDataSourceIndex:(int)arg1;
-(int)dataSourceSectionForSection:(int)arg1;
-(int)numberOfPrefixActionRowsInTableView:(id)arg1;
-(int)prefixActionIndexForIndexPath:(id)arg1;
-(int)indexOfFirstDataSourceSection;
-(Class)tableView:(id)arg1 prefixActionCellConfigurationAtIndex:(int)arg2;
-(int)sectionForDataSourceSection:(int)arg1;
@end
