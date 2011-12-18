/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIAlertView.h"

@class UIButton, UILabel, UISlider;

@interface SBNowPlayingAlertSheet : UIAlertView
{
    struct CGRect volumeSliderFrame;
    BOOL showingSliderOrLabel;
    UIButton *routeButton;
    UISlider *volumeSlider;
    UILabel *routeLabel;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_positionControlButton:(int)arg1 withFloor:(float)arg2;
- (void)showRouteButton:(BOOL)arg1 volumeSlider:(BOOL)arg2 animated:(BOOL)arg3;
- (void)layout;
@property(retain, nonatomic) UILabel *routeLabel; // @synthesize routeLabel;
@property(retain, nonatomic) UIButton *routeButton; // @synthesize routeButton;
@property(retain, nonatomic) UISlider *volumeSlider; // @synthesize volumeSlider;
@property(nonatomic) struct CGRect volumeSliderFrame; // @synthesize volumeSliderFrame;

@end
