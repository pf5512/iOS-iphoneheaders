/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, HSConnection;

@interface HSLibrary : NSObject {

	BOOL _requiresPassword;
	NSString* _name;
	NSString* _uniqueIdentifier;
	unsigned _version;
	HSConnection* _connection;
	<NSObject>* _context;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL requiresPassword;                    //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) HSConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) <NSObject> * context;                       //@synthesize context=_context - In the implementation block
-(BOOL)requiresPassword;
-(void)dealloc;
-(id)context;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setContext:(id)arg1 ;
-(id)uniqueIdentifier;
-(unsigned)version;
-(id)connection;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned)arg3 baseURL:(id)arg4 ;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned)arg3 baseURL:(id)arg4 connectionType:(int)arg5 ;
-(id)initWithConnectionConfiguration:(id)arg1 connectionType:(int)arg2 ;
-(id)initWithConnectionConfiguration:(id)arg1 ;
@end

