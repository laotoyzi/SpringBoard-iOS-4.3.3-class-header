/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBCallFailureAlertItem : SBAlertItem
{
    int _causeCode;
    NSString *_address;
    struct __CTCall *_call;
}

- (id)initWithCauseCode:(long)arg1 call:(struct __CTCall *)arg2;
- (void)dealloc;
- (void)_callback;
- (id)lockLabel;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)performUnlockAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end

