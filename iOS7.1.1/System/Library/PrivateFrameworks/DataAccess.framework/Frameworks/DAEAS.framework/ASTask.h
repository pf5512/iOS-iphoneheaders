/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/DATask.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class ASItem, NSHTTPURLResponse, ASParseContext, NSURLConnection, NSURLRequest, NSMutableSet, ASTaskManager, NSString, NSError, NSDate, NSTimer, DATaskManager;

@interface ASTask : NSObject <DATask, NSURLConnectionDelegate> {

	bool _haveSwitchedCodePage;
	bool _haveParsedCommand;
	ASItem* _currentlyParsingItem;
	id _delegate;
	NSHTTPURLResponse* _response;
	ASParseContext* _parseContext;
	NSURLConnection* _connection;
	NSURLRequest* _request;
	NSMutableSet* _attemptedIdentities;
	bool _isFakingIt;
	bool _didSendRequest;
	bool _didFailWithError;
	bool _didCancel;
	bool _didReceiveResponse;
	bool _didReceiveData;
	bool _didFinishLoading;
	bool _didReset;
	bool _finished;
	bool _inDelegateCallout;
	bool _finishedByTimeoutEnforcer;
	int _interfaceBinding;
	void* _context;
	bool _isExclusive;
	int _numBadPasswordResponses;
	bool _askedToCancelWhileModal;
	bool _haveCheckedForTopLevelError;
	bool _handledTopLevelError;
	int _taskID;
	ASTaskManager* _taskManager;
	int _modalReason;
	int _modalPushCount;
	NSString* _lastKnownPolicyKey;
	NSError* _passwordNotificationError;
	NSString* _lastKnownPassword;
	NSDate* _dateConnectionWentOut;
	NSTimer* _timeoutEnforcer;
	bool _retry;

}

@property (assign,nonatomic) DATaskManager * taskManager;                //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* context;                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) int interfaceBinding;                       //@synthesize interfaceBinding=_interfaceBinding - In the implementation block
@property (assign,nonatomic) bool isExclusive;                           //@synthesize isExclusive=_isExclusive - In the implementation block
@property (nonatomic,retain) ASItem * currentlyParsingItem;              //@synthesize currentlyParsingItem=_currentlyParsingItem - In the implementation block
@property (assign,nonatomic) bool askedToCancelWhileModal;               //@synthesize askedToCancelWhileModal=_askedToCancelWhileModal - In the implementation block
@property (nonatomic,retain) NSString * lastKnownPassword;               //@synthesize lastKnownPassword=_lastKnownPassword - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutEnforcer;                  //@synthesize timeoutEnforcer=_timeoutEnforcer - In the implementation block
+(void)_setDefaultTaskTimeout:(double)arg1 ;
+(void)_restoreDefaultTaskTimeout;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(double)timeoutInterval;
-(void)finishWithError:(id)arg1 ;
-(id)command;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(double)percentComplete;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)reset;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)taskManager;
-(id)currentlyParsingItem;
-(void)setCurrentlyParsingItem:(id)arg1 ;
-(int)taskStatusForError:(id)arg1 ;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(bool)attemptRetryWithStatus:(int)arg1 error:(id)arg2 ;
-(void)willCallOutToDelegate;
-(void)didCallOutToDelegate;
-(int)commandCode;
-(id)requestBody;
-(bool)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(bool)processContext:(id)arg1 ;
-(void)didProcessContext:(id)arg1 ;
-(id)_url;
-(id)_easVersion;
-(id)_policyKey;
-(id)_HTTPMethodForRequest:(id)arg1 ;
-(bool)_shouldSendAuthForRequest:(id)arg1 ;
-(void)_addAuthToRequest:(id)arg1 ;
-(bool)_shouldRedirectToHTTPForRequest:(id)arg1 ;
-(bool)shouldHandlePasswordErrors;
-(bool)shouldStallAfterConnectionLost;
-(bool)requiresEASVersionInformaton;
-(bool)shouldLogIncomingData;
-(id)responseContentType;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(void)startModal;
-(bool)shouldHoldPowerAssertion;
-(void)setTaskManager:(id)arg1 ;
-(id)parameterData;
-(int)numDownloadedElements;
-(int)taskID;
-(void)handleTopLevelErrorStatus:(id)arg1 ;
-(void)reportStatusWithError:(id)arg1 ;
-(bool)checkForErrorInContext:(id)arg1 ;
-(id)httpMethod;
-(int)interfaceBinding;
-(bool)shouldReportTimeInNetwork;
-(bool)requiresEASVersionUpdate;
-(id)requestBodyStreamOutKnownSize:(int*)arg1 ;
-(id)_connectionForLogging;
-(id)_requestForLogging;
-(void)setTimeoutEnforcer:(id)arg1 ;
-(void)tearDownResources;
-(void)_timeoutEnforcerFired:(id)arg1 ;
-(void)_pushModalForReason:(int)arg1 ;
-(void)_continuePerformTask;
-(void)taskManagerDidFindEASVersion;
-(void)taskManagerDidUpdatePolicyKey;
-(void)_handleBadPasswordResponse;
-(void)_popModal;
-(bool)askedToCancelWhileModal;
-(void)_failImmediately;
-(bool)_isWBXML;
-(void)_addDeviceManagementIdToRequest:(id)arg1 ;
-(void)_setHTTPParametersOnRequest:(id)arg1 outBodyStream:(id*)arg2 outBodyData:(id*)arg3 ;
-(id)_applyAuthenticationChain:(CFArrayRef)arg1 toRequest:(id)arg2 ;
-(bool)isInCallOutToDelegate;
-(void)willProcessContext;
-(void)setLastKnownPassword:(id)arg1 ;
-(bool)_handleRedirect:(id)arg1 ;
-(bool)_handleCertificateError:(id)arg1 ;
-(void)taskManagerDidFailToUpdatePolicyKey;
-(void)_initFakeParseContext;
-(void)setInterfaceBinding:(int)arg1 ;
-(bool)isExclusive;
-(void)setIsExclusive:(bool)arg1 ;
-(void)setAskedToCancelWhileModal:(bool)arg1 ;
-(id)timeoutEnforcer;
-(id)contentType;
-(id)lastKnownPassword;
-(bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
@end

