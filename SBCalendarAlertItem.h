/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString, NSTimeZone;

@interface SBCalendarAlertItem : SBAlertItem
{
    double _date;
    NSTimeZone *_timeZone;
    NSString *_title;
    NSString *_location;
    int _eventId;
    BOOL _isAllDay;
}

+ (void)registerForAlerts;
+ (void)alarmsDidFire:(id)arg1;
- (id)initWithDate:(double)arg1 timeZone:(id)arg2 title:(id)arg3 location:(id)arg4 eventId:(int)arg5 isAllDay:(BOOL)arg6;
- (void)dealloc;
- (id)description;
- (void)_updateEventDetails:(id)arg1;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)lockLabel;
- (void)didPresentAlertView:(id)arg1;
- (void)revealEvent;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)performUnlockAction;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)willShowInAwayItems;
- (void)_playPresentationSound;
- (id)awayItem;
- (void)screenWillUndim;

@end

