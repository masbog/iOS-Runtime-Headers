/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendarChooser, EKEventStore, EKCalendar;

@interface EKCalendarEditItemViewController : EKEditItemViewController {
    EKCalendarChooser *_chooser;
    unsigned int _entityType;
    BOOL _limitToSource;
    EKCalendar *_selectedCalendar;
    EKEventStore *_store;
}

@property BOOL limitToSource;
@property(retain) EKCalendar * selectedCalendar;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned int)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 store:(id)arg2 styleProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 store:(id)arg2;
- (BOOL)limitToSource;
- (void)loadView;
- (id)selectedCalendar;
- (void)setLimitToSource:(BOOL)arg1;
- (void)setSelectedCalendar:(id)arg1;
- (void)viewDidUnload;

@end
