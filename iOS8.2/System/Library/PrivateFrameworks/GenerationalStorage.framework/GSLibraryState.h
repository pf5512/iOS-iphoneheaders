/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/revisiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <revisiond/revisiond-Structs.h>
#import <revisiond/NSSecureCoding.h>
#import <revisiond/PQLBindable.h>

@class NSString;

@interface GSLibraryState : NSObject <NSSecureCoding, PQLBindable> {

	int state;
	int lastFeatureSet;
	unsigned long long fseventID;

}

@property (nonatomic,readonly) char isClean; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(char)isClean;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
@end

