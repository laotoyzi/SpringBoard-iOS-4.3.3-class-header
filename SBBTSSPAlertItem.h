/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSNumber, NSString;

@interface SBBTSSPAlertItem : SBAlertItem
{
    id _delegate;
    NSString *_name;
    NSNumber *_number;
}

- (id)initWithName:(id)arg1 andComparison:(id)arg2;
- (void)dealloc;
- (void)dismiss:(int)arg1;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

@end
