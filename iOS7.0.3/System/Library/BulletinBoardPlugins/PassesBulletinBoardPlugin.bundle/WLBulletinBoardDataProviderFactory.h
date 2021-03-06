/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/BulletinBoardPlugins/PassesBulletinBoardPlugin.bundle/PassesBulletinBoardPlugin
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBDataProviderFactory.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WLBulletinBoardDataProviderFactory : NSObject <BBDataProviderFactory> {

	NSMutableDictionary* _dataProviders;
	NSObject<OS_dispatch_queue>* _providerQueue;

}
-(void)_invalidateBulletins:(id)arg1 ;
-(void)_removeBulletin:(id)arg1 ;
-(void)_getPassTypeID:(id*)arg1 recordID:(id*)arg2 fromNoticication:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)sectionIdentifier;
-(void)_addBulletin:(id)arg1 ;
-(void)_modifyBulletin:(id)arg1 ;
-(id)dataProviders;
-(id)defaultSectionInfo;
@end

