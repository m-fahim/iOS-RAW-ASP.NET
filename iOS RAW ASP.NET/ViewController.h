//
//  ViewController.h
//  iOS RAW ASP.NET
//
//  Created by mfahim on 25/03/2015.
//  Copyright (c) 2015 mfahim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Configuration.h"

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *passwordTxF;
@property (weak, nonatomic) IBOutlet UITextField *usenameTxF;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *userLoginProgress;
@property (weak, nonatomic) IBOutlet UIButton *userLogin;
@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSMutableData *receivedData;
- (IBAction)loginUserBtnAct:(id)sender;
- (IBAction)checkConfigurations;
- (IBAction)registerUserVC:(id)sender;

- (void)saveCustomObject:(Configuration *)object key:(NSString *)key ;
- (Configuration *)loadCustomObjectWithKey:(NSString *)key;

@end