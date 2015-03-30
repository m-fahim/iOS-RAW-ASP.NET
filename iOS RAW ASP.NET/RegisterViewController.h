//
//  RegisterViewController.h
//  iOS RAW ASP.NET
//
//  Created by mfahim on 25/03/2015.
//  Copyright (c) 2015 mfahim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RegisterViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *emailTxF;
@property (weak, nonatomic) IBOutlet UITextField *registerPasswordTxF;
@property (weak, nonatomic) IBOutlet UITextField *confirmPasswordTxF;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *userRegisterProgress;
@property (weak, nonatomic) IBOutlet UIButton *userRegister;

@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSMutableData *receivedData;

- (IBAction)registerUserBtnAct:(id)sender;
- (IBAction)loginUserVC:(id)sender;

@end
