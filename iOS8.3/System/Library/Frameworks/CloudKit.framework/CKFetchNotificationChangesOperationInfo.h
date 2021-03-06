/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:38:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo <NSSecureCoding> {

	CKServerChangeToken* _previousServerChangeToken;
	unsigned _resultsLimit;

}

@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned resultsLimit;                                        //@synthesize resultsLimit=_resultsLimit - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResultsLimit:(unsigned)arg1 ;
-(unsigned)resultsLimit;
-(CKServerChangeToken *)previousServerChangeToken;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
@end

