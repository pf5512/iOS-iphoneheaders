/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableString, NSData, NSArray, OTATaskingAgentConnection;

@interface OTATask : NSObject {

	int _taskType;
	NSString* _taskId;
	NSMutableString* _taskDigest;
	NSData* _rawBlob;
	NSArray* _verifiedTask;
	OTATaskingAgentConnection* _taskingAgent;
	BOOL _isValid;

}

@property (nonatomic,readonly) int taskType;                   //@synthesize taskType=_taskType - In the implementation block
@property (nonatomic,readonly) NSString * taskId;              //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) NSData * rawBlob;               //@synthesize rawBlob=_rawBlob - In the implementation block
@property (nonatomic,readonly) BOOL isValid;                   //@synthesize isValid=_isValid - In the implementation block
+(id)descriptionForTaskType:(int)arg1 ;
+(id)taskIdForInstalledTaskOfType:(int)arg1 ;
+(BOOL)_taskConfigStructureIsValid:(id)arg1 ;
+(id)taskIdPathForTaskType:(int)arg1 ;
+(id)getTaskPathForType:(int)arg1 ;
+(BOOL)_uninstallTaskOfType:(int)arg1 ;
-(id)initWithBlobData:(id)arg1 taskId:(id)arg2 type:(int)arg3 withInfo:(id)arg4 ;
-(BOOL)_matchSelector:(id)arg1 withValue:(id)arg2 ofConfig:(id)arg3 ;
-(id)_findFirstMatchingConfig:(id)arg1 withInfo:(id)arg2 ;
-(NSData *)rawBlob;
-(BOOL)_taskPlistStructureIsValid:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)_writeTaskingId;
-(BOOL)_verifySignedBlobWithInfo:(id)arg1 ;
-(BOOL)saveToPath:(id)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(BOOL)install;
-(NSString *)taskId;
-(int)taskType;
-(BOOL)defer;
@end
