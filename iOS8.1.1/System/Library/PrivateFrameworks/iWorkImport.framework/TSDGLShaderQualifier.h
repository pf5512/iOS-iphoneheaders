/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TSDGLShaderQualifier : NSObject {

	int _uniformLocation;
	BOOL _needsUpdate;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL needsUpdate;               //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) int uniformLocation;              //@synthesize uniformLocation=_uniformLocation - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(void)setGLUniformCheckWithShader:(id)arg1 ;
-(void)updateUniformLocationWithShaderProgramObject:(int)arg1 ;
-(int)uniformLocation;
-(void)setUniformLocation:(int)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)needsUpdate;
@end

