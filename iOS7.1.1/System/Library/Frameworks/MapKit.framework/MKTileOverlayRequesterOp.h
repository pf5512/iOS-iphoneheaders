/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class MKTileOverlayRequester, NSData;

@interface MKTileOverlayRequesterOp : NSObject {

	GEOTileKey _key;
	MKTileOverlayRequester* _delegate;
	NSData* _data;

}

@property (assign,nonatomic) GEOTileKey key;                                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MKTileOverlayRequester * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)cancel;
-(void)start;
-(GEOTileKey)key;
-(id).cxx_construct;
-(void)setKey:(GEOTileKey)arg1 ;
-(void).cxx_destruct;
@end

