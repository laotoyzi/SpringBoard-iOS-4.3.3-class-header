/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBDeviceLockView.h"

@class UIKeyboard;

@interface SBDeviceLockViewWithKeyboard : SBDeviceLockView
{
    UIKeyboard *_keyboard;
    BOOL _isAnimating;
    BOOL _wasMinimizedWhenAnimationStarted;
    BOOL _triedToMinMaxWhileRotating;
}

- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3;
- (void)dealloc;
- (id)keypadView;
- (BOOL)isKeypadMinimized;
- (void)setMinimized:(BOOL)arg1;
- (void)minimize;
- (void)maximize;
- (void)returnKeyPressed:(id)arg1;
- (struct CGRect)keyboardFrameForInterfaceOrientation:(int)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)willAnimateToInterfaceOrientation:(int)arg1;
- (void)animateToInterfaceInterfaceOrientation:(int)arg1;
- (void)didAnimateToInterfaceOrientation:(int)arg1;
- (void)geometryChanged:(id)arg1;
- (void)_layoutForCurrentOrientation;
- (void)_layoutEntryView;
- (void)_acceptOrCancelReturnKeyPress;

@end

