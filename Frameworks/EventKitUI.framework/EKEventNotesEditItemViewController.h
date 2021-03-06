/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarNotesCell, NSString, UITableView;

@interface EKEventNotesEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
    CalendarNotesCell *_cell;
    UITableView *_table;
    NSString *_text;
}

@property(copy) NSString * noteText;

- (BOOL)becomeFirstResponder;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)loadView;
- (id)noteText;
- (BOOL)resignFirstResponder;
- (void)setNoteText:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)validateAllowingAlert:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;

@end
