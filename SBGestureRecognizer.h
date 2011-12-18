/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SBGestureRecognizer : NSObject
{
    int m_state;
    id m_handler;
    unsigned int m_activeTouchesCount;
    CDStruct_a924d358 m_activeTouches[30];
    unsigned int m_strikes;
    unsigned int m_templateMatches;
    NSMutableArray *m_touchTemplates;
    NSMutableArray *m_mutuallyExclusiveGestures;
    BOOL m_sentTouchesCancelledToApplication;
    BOOL m_includedInGestureRecognitionIsPossibleTest;
}

- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) BOOL shouldReceiveTouches;
- (void)reset;
- (void)sendTouchesCancelledToApplicationIfNeeded;
- (void)addMutuallyExclusiveGesture:(id)arg1;
- (void)cancelMutuallyExclusiveGestures;
- (void)addTouchTemplate:(id)arg1;
- (int)templateMatch;
@property(nonatomic) int state; // @synthesize state=m_state;
- (void)touchesBegan:(struct __SBGestureContext *)arg1;
- (void)touchesMoved:(struct __SBGestureContext *)arg1;
- (void)touchesEnded:(struct __SBGestureContext *)arg1;
- (void)touchesCancelled:(struct __SBGestureContext *)arg1;
@property(nonatomic) BOOL includedInGestureRecognitionIsPossibleTest; // @synthesize includedInGestureRecognitionIsPossibleTest=m_includedInGestureRecognitionIsPossibleTest;
@property(copy, nonatomic) id handler; // @synthesize handler=m_handler;

@end
