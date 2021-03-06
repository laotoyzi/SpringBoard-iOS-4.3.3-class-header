/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBApplicationIcon.h"

@class SBCalendarIconContentsView;

@interface SBCalendarApplicationIcon : SBApplicationIcon
{
    SBCalendarIconContentsView *_dateContents;
}

- (id)initWithApplication:(id)arg1;
- (void)dealloc;
- (void)localeChanged;
- (void)setShowsImages:(BOOL)arg1;
- (void)prepareIconImageViewForRecycling;
- (id)generateIconImage:(int)arg1;
- (struct CGImage *)createComposedIconImageUsingContext:(struct CGContext *)arg1;
- (void)updateInvitationBadge;

@end

