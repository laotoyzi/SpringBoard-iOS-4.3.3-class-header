/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString, SBPasscodeAlertItem, SBPasscodeComplianceAlertItem;

@interface SBPasscodeController : NSObject
{
    SBPasscodeAlertItem *_passcodeAlertItem;
    int _mode;
    NSString *_previousPasscode;
    NSString *_newPasscode;
    int _unlockScreenType;
    SBPasscodeComplianceAlertItem *_complianceAlertItem;
    NSDate *_forcedComplianceDate;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)forceUserToChangePasscode;
- (void)_passwordEntered:(id)arg1;
- (void)_userWantsToComplyNow:(BOOL)arg1;
- (void)_abort;
- (void)_didEndCall;
- (void)_startListeningToTelephonyNotifications;
- (void)_stopListeningToTelephonyNotifications;
- (void)checkPasscodeCompliance;

@end
