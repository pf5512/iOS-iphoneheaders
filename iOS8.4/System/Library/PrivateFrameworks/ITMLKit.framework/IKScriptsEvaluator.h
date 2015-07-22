/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/ISURLOperationDelegate.h>

@class NSArray, IKAppContext, JSManagedValue, NSMutableArray, NSString;

@interface IKScriptsEvaluator : NSObject <ISURLOperationDelegate> {

	BOOL _isJingleRequest;
	BOOL _success;
	NSArray* _scripts;
	IKAppContext* _appContext;
	JSManagedValue* _callback;
	NSMutableArray* _records;

}

@property (assign,nonatomic) BOOL isJingleRequest;                          //@synthesize isJingleRequest=_isJingleRequest - In the implementation block
@property (nonatomic,retain) NSArray * scripts;                             //@synthesize scripts=_scripts - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) JSManagedValue * callback;                     //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                      //@synthesize records=_records - In the implementation block
@property (assign,nonatomic) BOOL success;                                  //@synthesize success=_success - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(BOOL)success;
-(void)evaluate;
-(NSMutableArray *)records;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(JSManagedValue *)callback;
-(id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(BOOL)arg4 ;
-(void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(BOOL)arg3 ;
-(BOOL)isJingleRequest;
-(void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3 ;
-(void)setIsJingleRequest:(BOOL)arg1 ;
-(void)setScripts:(NSArray *)arg1 ;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(IKAppContext *)appContext;
-(void)setSuccess:(BOOL)arg1 ;
-(NSArray *)scripts;
-(void)setCallback:(JSManagedValue *)arg1 ;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
@end
