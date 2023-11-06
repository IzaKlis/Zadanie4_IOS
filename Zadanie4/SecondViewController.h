
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>
-(void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;
@end

@interface SecondViewController : UIViewController
@property(nonatomic,weak) IBOutlet UITextField *modifiedFieldSurname;
@property NSString *surname;
@property(nonatomic,weak) id <SecondViewControllerDelegate> delegate;
-(IBAction)back;
@end

NS_ASSUME_NONNULL_END
