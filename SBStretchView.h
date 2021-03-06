/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class CADisplayLink, NSMutableArray, SBHarmonicOscillator;

@interface SBStretchView : UIView
{
    id m_delegate;
    int m_anchor;
    struct CGPoint m_point;
    UIView *m_baseView;
    UIView *m_stretchedView;
    float m_stretchAmount;
    float m_initialBounceStretchAmount;
    UIView *m_stretchContainer;
    NSMutableArray *m_stretchViews;
    CADisplayLink *m_displayLink;
    SBHarmonicOscillator *m_oscillator;
    double m_animationTimestamp;
    float m_amplitude;
    BOOL m_stretching;
}

+ (float)maxBounceStretchAmount;
- (id)initWithFrame:(struct CGRect)arg1 view:(id)arg2;
- (void)dealloc;
- (void)setAmplitude:(float)arg1;
- (void)setStretchAmount:(float)arg1;
- (void)addStretchColumnViews;
- (void)endAnimationFinished;
- (void)beginStretching;
- (void)updateStretching:(float)arg1;
- (void)endStretching;
- (void)endStretchingAnimated:(BOOL)arg1;
- (void)updateEndStretching:(id)arg1;
- (void)bounce;
- (void)updateBounce:(id)arg1;
@property(readonly, nonatomic) BOOL stretching; // @synthesize stretching=m_stretching;
@property(readonly, nonatomic) float stretchAmount; // @synthesize stretchAmount=m_stretchAmount;
@property(readonly, nonatomic) UIView *stretchedView; // @synthesize stretchedView=m_stretchedView;
@property(nonatomic) int anchor; // @synthesize anchor=m_anchor;
@property(nonatomic) id delegate; // @synthesize delegate=m_delegate;

@end

