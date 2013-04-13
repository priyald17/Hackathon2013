//
//  TableViewController.m
//  Pickle
//
//  Created by jarthur on 4/12/13.
//  Copyright (c) 2013 com.zsweedyk. All rights reserved.
//

#import "TableVC.h"

@interface TableVC ()

@end

@implementation TableVC

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    
    NSLog(@"table view");
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
