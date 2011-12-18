/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBSlidingAlertDisplay.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, UITableView;

@interface SBSIMToolkitListDisplay : SBSlidingAlertDisplay <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;
    NSArray *_items;
}

+ (id)newTopBarForInstance:(id)arg1;
- (void)dealloc;
- (id)_simToolkitListItems;
- (void)_selectListItem:(unsigned long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)showsDesktopImage;
- (void)setMiddleContentAlpha:(float)arg1;
- (void)alertDisplayWillBecomeVisible;
- (void)leftNavigationButtonPressed;
- (void)rightNavigationButtonPressed;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
