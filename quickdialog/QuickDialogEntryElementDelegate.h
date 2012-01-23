#import <Foundation/Foundation.h>

@class QEntryElement;
@class QEntryTableViewCell;

@protocol QuickDialogEntryElementDelegate <NSObject>

@optional
- (void)QEntryShouldChangeCharactersInRangeForElement:(QEntryElement *)element andCell:(QEntryTableViewCell *)cell;
- (void)QEntryEditingChangedForElement:(QEntryElement *)element  andCell:(QEntryTableViewCell *)cell;
- (void)QEntryDidBeginEditingElement:(QEntryElement *)element  andCell:(QEntryTableViewCell *)cell;
- (void)QEntryDidEndEditingElement:(QEntryElement *)element andCell:(QEntryTableViewCell *)cell;
- (void)QEntryShouldReturnForElement:(QEntryElement *)element andCell:(QEntryTableViewCell *)cell;
- (void)QEntryMustReturnForElement:(QEntryElement *)element andCell:(QEntryTableViewCell *)cell;

@end