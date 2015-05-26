//
//  SensimityView.h
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface SensimityView : UIView<UITextFieldDelegate, CBPeripheralManagerDelegate>

@property (strong, nonatomic) NSDictionary *myBeaconData;
@property (strong, nonatomic) CBPeripheralManager *peripheralManager;

- (void) construct;
@end