/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:55:58 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUManagerServerInterface.h>
#import <softwareupdateservicesd/SUManagerDelegate.h>

@class SUManager, NSMutableArray;

@interface SUManagerServer : NSObject <SUManagerServerInterface, SUManagerDelegate> {

	SUManager* _manager;
	NSMutableArray* _clients;

}
+(id)sharedInstance;
-(void)runUntilIdleExit;
-(id)_clientForCurrentConnection;
-(void)_notifyServerStart;
-(void)_clientMessagabilityDidChange:(id)arg1 ;
-(void)_clientForegroundnessDidChange:(id)arg1 ;
-(void)_sendLatestStatusForClient:(id)arg1 ;
-(void)_evaluateForegroundness;
-(void)pauseDownload:(/*^block*/ id)arg1 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)manager;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(id)clients;
-(void)setClientType:(int)arg1 withResult:(/*^block*/ id)arg2 ;
-(void)isScanning:(/*^block*/ id)arg1 ;
-(void)scanForUpdates:(id)arg1 withResult:(/*^block*/ id)arg2 ;
-(void)isDownloading:(/*^block*/ id)arg1 ;
-(void)startDownload:(/*^block*/ id)arg1 ;
-(void)startDownloadWithMetadata:(id)arg1 withResult:(/*^block*/ id)arg2 ;
-(void)updateDownloadMetadata:(id)arg1 withResult:(/*^block*/ id)arg2 ;
-(void)purgeDownload:(/*^block*/ id)arg1 ;
-(void)download:(/*^block*/ id)arg1 ;
-(void)isUpdateReadyForInstallation:(/*^block*/ id)arg1 ;
-(void)installUpdate:(/*^block*/ id)arg1 ;
-(void)scanRequestDidStartForOptions:(id)arg1 ;
-(void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3 ;
-(void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2 ;
-(void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2 ;
-(void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1 ;
-(void)downloadDidStart:(id)arg1 ;
-(void)downloadProgressDidChange:(id)arg1 ;
-(void)downloadDidFail:(id)arg1 withError:(id)arg2 ;
-(void)installDidStart:(id)arg1 ;
-(void)installDidFail:(id)arg1 withError:(id)arg2 ;
-(void)installDidFinish:(id)arg1 ;
-(void)resumeDownload:(/*^block*/ id)arg1 ;
-(void)cancelDownload:(/*^block*/ id)arg1 ;
@end

