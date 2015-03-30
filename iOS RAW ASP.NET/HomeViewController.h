//
//  HomeViewController.h
//  iOS RAW ASP.NET
//
//  Created by mfahim on 25/03/2015.
//  Copyright (c) 2015 mfahim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Configuration.h"

@interface HomeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    
    IBOutlet UITableView *tableData;
    
}

- (IBAction)userLogout:(id)sender;

- (Configuration *)loadCustomObjectWithKey:(NSString *)key;

@end
