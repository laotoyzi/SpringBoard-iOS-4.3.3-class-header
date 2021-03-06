/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface VolumeControl : NSObject
{
    BOOL _debounce;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    int _mode;
    NSMutableSet *_alwaysHiddenCategories;
    NSString *_lastDisplayedCategory;
    NSString *_lastEventCategory;
}

+ (id)sharedVolumeControl;
+ (float)volumeStep;
- (id)init;
- (void)dealloc;
- (void)addAlwaysHiddenCategory:(id)arg1;
- (void)removeAlwaysHiddenCategory:(id)arg1;
- (BOOL)_HUDIsDisplayableForCategory:(id)arg1;
- (BOOL)_allowVolumeAdjust;
- (void)toggleMute;
- (float)volume;
- (void)_changeVolumeBy:(float)arg1;
- (float)_calcButtonRepeatDelay;
- (void)increaseVolume;
- (void)decreaseVolume;
- (id)lastDisplayedCategory;
- (void)handleVolumeEvent:(struct __GSEvent *)arg1;
- (void)cancelVolumeEvent;
- (void)_registerForAVSystemControllerNotifications;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_serverConnectionDied:(id)arg1;
- (int)_volumeModeForCategory:(id)arg1;
- (void)_effectiveVolumeChanged:(id)arg1;
- (BOOL)_headphonesPresent;
- (id)_volumeHUDViewWithMode:(int)arg1 volume:(float)arg2;
- (void)_presentVolumeHUDWithMode:(int)arg1 volume:(float)arg2;
- (id)volumeHUDForCurrentCategory;
- (void)hideVolumeHUDIfVisible;

@end

