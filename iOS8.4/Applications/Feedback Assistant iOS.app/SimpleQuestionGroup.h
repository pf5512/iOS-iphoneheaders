/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBAQuestionGroup, FBAFormResponse, NSArray;

@interface SimpleQuestionGroup : NSObject {

	FBAQuestionGroup* _questionGroup;
	FBAFormResponse* _formResponse;
	NSArray* _quesionAnswerPairs;

}

@property (nonatomic,retain) FBAQuestionGroup * questionGroup;              //@synthesize questionGroup=_questionGroup - In the implementation block
@property (nonatomic,retain) FBAFormResponse * formResponse;                //@synthesize formResponse=_formResponse - In the implementation block
@property (nonatomic,retain) NSArray * quesionAnswerPairs;                  //@synthesize quesionAnswerPairs=_quesionAnswerPairs - In the implementation block
-(FBAFormResponse *)formResponse;
-(void)setFormResponse:(FBAFormResponse *)arg1 ;
-(void)setQuestionGroup:(FBAQuestionGroup *)arg1 ;
-(void)setQuesionAnswerPairs:(NSArray *)arg1 ;
-(NSArray *)quesionAnswerPairs;
-(FBAQuestionGroup *)questionGroup;
-(id)initWithQuestionGroup:(id)arg1 questionAnswerPairs:(id)arg2 ;
-(id)allAnswers;
-(id)allQuestions;
-(id)questionInRow:(unsigned)arg1 ;
-(id)answerInRow:(unsigned)arg1 ;
-(int)questionCount;
-(id)description;
@end
