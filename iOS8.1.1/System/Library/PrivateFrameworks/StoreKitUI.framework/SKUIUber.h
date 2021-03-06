/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIArtworkList, SKUIColorScheme, NSString;

@interface SKUIUber : NSObject {

	SKUIArtworkList* _artworkList;
	SKUIColorScheme* _colorScheme;
	NSString* _text;

}

@property (nonatomic,readonly) SKUIArtworkList * artworkList;              //@synthesize artworkList=_artworkList - In the implementation block
@property (nonatomic,readonly) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) NSString * text;                            //@synthesize text=_text - In the implementation block
-(NSString *)text;
-(SKUIColorScheme *)colorScheme;
-(SKUIArtworkList *)artworkList;
-(id)initWithUberDictionary:(id)arg1 ;
@end

