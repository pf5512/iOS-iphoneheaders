/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class CKOperation;

@interface CPLCloudKitTransportCancelState : NSObject {

	BOOL _cancelled;
	CKOperation* _operation;

}

@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) CKOperation * operation;                        //@synthesize operation=_operation - In the implementation block
-(CKOperation *)operation;
-(void)setOperation:(CKOperation *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isCancelled;
@end

