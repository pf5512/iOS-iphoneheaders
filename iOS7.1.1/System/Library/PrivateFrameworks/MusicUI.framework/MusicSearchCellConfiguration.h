/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicCellConfiguration.h>

@interface MusicSearchCellConfiguration : MusicCellConfiguration
+(id)tableViewBackgroundColor;
+(void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(bool)arg5 ;
+(id)tableViewCellBackgroundColor;
+(Class)tableViewCellClass;
+(double)tableViewCellHeight;
+(void)_appDefaultsDidChangeNotification:(id)arg1 ;
+(id)subtitleForMediaEntity:(id)arg1 valuesForProperties:(id)arg2 ;
+(id)titleForMediaEntity:(id)arg1 valuesForProperties:(id)arg2 ;
+(bool)isMediaEntityExplicit:(id)arg1 valuesForProperties:(id)arg2 ;
+(id)imageCacheRequestForMediaEntity:(id)arg1 valuesForProperties:(id)arg2 shouldLoadAsynchronously:(bool*)arg3 ;
+(void)appDefaultsDidChange;
@end

