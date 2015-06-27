/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/NSCopying.h>
#import <EventKit/NSSecureCoding.h>

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding> {

	char _temporary;
	int _entityType;
	int _rowID;

}
+(id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2 ;
+(id)objectIDWithCADObjectID:(SCD_Struct_EK11)arg1 ;
+(id)temporaryObjectIDWithEntityType:(int)arg1 ;
+(id)objectIDWithURL:(id)arg1 ;
+(char)supportsSecureCoding;
-(int)rowID;
-(SCD_Struct_EK11)CADObjectID;
-(char)isTemporary;
-(id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(char)arg3 ;
-(int)entityType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)entityName;
-(id)URIRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)stringRepresentation;
@end
