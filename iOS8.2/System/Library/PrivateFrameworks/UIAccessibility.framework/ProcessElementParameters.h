/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ProcessElementParameters : NSObject {

	char _grouped;
	char _onlyIncludeVisible;
	char _forSpeakThis;
	char _didCutOffElements;
	unsigned _maximumNumberOfElements;
	/*^block*/id _shouldAddElement;

}

@property (assign,nonatomic) char grouped;                                  //@synthesize grouped=_grouped - In the implementation block
@property (assign,nonatomic) char onlyIncludeVisible;                       //@synthesize onlyIncludeVisible=_onlyIncludeVisible - In the implementation block
@property (assign,nonatomic) char forSpeakThis;                             //@synthesize forSpeakThis=_forSpeakThis - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfElements;              //@synthesize maximumNumberOfElements=_maximumNumberOfElements - In the implementation block
@property (assign,nonatomic) char didCutOffElements;                        //@synthesize didCutOffElements=_didCutOffElements - In the implementation block
@property (nonatomic,copy) id shouldAddElement;                             //@synthesize shouldAddElement=_shouldAddElement - In the implementation block
-(void)dealloc;
-(char)grouped;
-(void)setGrouped:(char)arg1 ;
-(char)onlyIncludeVisible;
-(void)setOnlyIncludeVisible:(char)arg1 ;
-(char)forSpeakThis;
-(void)setForSpeakThis:(char)arg1 ;
-(unsigned)maximumNumberOfElements;
-(void)setMaximumNumberOfElements:(unsigned)arg1 ;
-(char)didCutOffElements;
-(void)setDidCutOffElements:(char)arg1 ;
-(id)shouldAddElement;
-(void)setShouldAddElement:(id)arg1 ;
@end

