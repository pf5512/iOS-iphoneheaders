/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate, OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSLock, NSHashTable, GEOResourceManifestConfiguration, NSString;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {

	id<GEOResourceManifestServerProxyDelegate> _delegate;
	NSObject*<OS_xpc_object> _conn;
	NSLock* _connLock;
	NSHashTable* _cancellingConnections;
	NSLock* _cancellingConnectionsLock;
	unsigned _retryCount;
	char _isUpdatingManifest;
	char _isLoadingResources;
	NSObject*<OS_dispatch_queue> _serverQueue;
	GEOResourceManifestConfiguration* _configuration;
	NSLock* _authTokenLock;
	NSString* _authToken;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(id)authToken;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(void)openConnection;
-(void)closeConnection;
-(id)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)forceUpdate:(/*^block*/id)arg1 ;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(oneway void)resetActiveTileGroup;
-(void)_setupConnection;
-(void)_handleMessage:(id)arg1 xpcMessage:(id)arg2 ;
@end

