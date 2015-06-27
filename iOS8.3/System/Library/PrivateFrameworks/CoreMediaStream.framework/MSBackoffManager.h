/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:11:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/NSCoding.h>

@protocol MSBackoffManagerDelegate;
@class NSDate;

@interface MSBackoffManager : NSObject <NSCoding> {

	id<MSBackoffManagerDelegate> _delegate;
	double _initialInterval;
	double _backoffFactor;
	double _randomizeFactor;
	double _maxBackoffInterval;
	double _currentInterval;
	NSDate* _nextExpiryDate;
	NSDate* _retryAfterDate;

}

@property (assign,nonatomic) id<MSBackoffManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double initialInterval;                             //@synthesize initialInterval=_initialInterval - In the implementation block
@property (assign,nonatomic) double backoffFactor;                               //@synthesize backoffFactor=_backoffFactor - In the implementation block
@property (assign,nonatomic) double randomizeFactor;                             //@synthesize randomizeFactor=_randomizeFactor - In the implementation block
@property (assign,nonatomic) double maxBackoffInterval;                          //@synthesize maxBackoffInterval=_maxBackoffInterval - In the implementation block
@property (assign,nonatomic) double currentInterval;                             //@synthesize currentInterval=_currentInterval - In the implementation block
@property (nonatomic,retain) NSDate * nextExpiryDate;                            //@synthesize nextExpiryDate=_nextExpiryDate - In the implementation block
@property (nonatomic,retain) NSDate * retryAfterDate;                            //@synthesize retryAfterDate=_retryAfterDate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MSBackoffManagerDelegate>)arg1 ;
-(id<MSBackoffManagerDelegate>)delegate;
-(void)reset;
-(void)_complainAboutMissingKeyInArchive:(id)arg1 ;
-(id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5 ;
-(void)setCurrentInterval:(double)arg1 ;
-(NSDate *)nextExpiryDate;
-(void)didReceiveRetryAfterDate:(id)arg1 ;
-(void)backoff;
-(id)copyParameters;
-(double)initialInterval;
-(void)setInitialInterval:(double)arg1 ;
-(double)backoffFactor;
-(void)setBackoffFactor:(double)arg1 ;
-(double)randomizeFactor;
-(void)setRandomizeFactor:(double)arg1 ;
-(double)maxBackoffInterval;
-(void)setMaxBackoffInterval:(double)arg1 ;
-(double)currentInterval;
-(void)setNextExpiryDate:(NSDate *)arg1 ;
-(NSDate *)retryAfterDate;
-(void)setRetryAfterDate:(NSDate *)arg1 ;
@end
