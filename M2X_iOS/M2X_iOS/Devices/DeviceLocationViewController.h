
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface DeviceLocationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableViewLocations;
@property (weak, nonatomic) IBOutlet UIButton *btnUpdateLocation;
@property (weak, nonatomic) IBOutlet UITextField *tfLocationName;
@property (weak, nonatomic) IBOutlet UITextField *tfLatitude;
@property (weak, nonatomic) IBOutlet UITextField *tfLongitude;
@property (weak, nonatomic) IBOutlet UITextField *tfElevation;

@property (nonatomic, strong) NSMutableArray *locationsList;
@property (nonatomic, strong) M2XDevice *device;
@property (nonatomic, strong) UITextField *current;
@property (nonatomic, strong) CLLocationManager *locationManager;
@property (nonatomic, strong) NSString *currentLocality;

@end
