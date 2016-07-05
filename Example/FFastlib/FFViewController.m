//
//  FFViewController.m
//  FFastlib
//
//  Created by lingyfh on 07/05/2016.
//  Copyright (c) 2016 lingyfh. All rights reserved.
//

#import "FFViewController.h"
#import "FFastLib.h"

@interface FFViewController ()

@end

@implementation FFViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    UIView *cornerRView = [[UIView alloc] initWithFrame:CGRectMake(20, 20, 200, 200)];
    [cornerRView setBackgroundColor:[UIColor blueColor]];
    [self.view addSubview:cornerRView];
    [cornerRView setCornerRadius:10];
    
    PLog(@"CurrentLanguage = %@", FFCurrentLanguage);
    PLog(@"sys name = %@", FFSysName);
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
