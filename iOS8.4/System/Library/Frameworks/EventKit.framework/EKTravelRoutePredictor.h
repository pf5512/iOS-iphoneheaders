/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class EKTravelAgendaItem;


@protocol EKTravelRoutePredictor <NSObject>
@property (assign,nonatomic) EKTravelAgendaItem * agendaItem; 
@required
-(id)initWithSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3 travelMethod:(int)arg4;
-(void)updateLocation:(id)arg1 handler:(/*^block*/id)arg2;
-(EKTravelAgendaItem *)agendaItem;
-(void)setAgendaItem:(id)arg1;

@end
