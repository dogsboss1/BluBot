//
//  ViewController.h
//  BluBot
//
//  Created by felix king on 5/09/2015.
//  Copyright (c) 2015 Felix King. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DFBlunoManager.h"

@interface ViewController : UIViewController<DFBlunoDelegate>

@property(strong, nonatomic) DFBlunoManager* blunoManager;
@property(strong, nonatomic) DFBlunoDevice* blunoDev;
@property(strong, nonatomic) NSMutableArray* aryDevices;

@property (weak, nonatomic) IBOutlet UILabel *lbReceivedMsg;
@property (weak, nonatomic) IBOutlet UITextField *txtSendMsg;
@property (weak, nonatomic) IBOutlet UILabel *lbReady;

@property (strong, nonatomic) IBOutlet UIView *viewDevices;
@property (weak, nonatomic) IBOutlet UITableView *tbDevices;

@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *SearchIndicator;

- (IBAction)actionSearch:(id)sender;
- (IBAction)actionReturn:(id)sender;
- (IBAction)actionSend:(id)sender;
- (IBAction)actionDidEnd:(id)sender;
@end

