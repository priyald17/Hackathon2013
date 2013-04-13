//
//  Scene2ViewController.m
//  Pickle
//
//  Created by jarthur on 4/12/13.
//  Copyright (c) 2013 com.zsweedyk. All rights reserved.
//

#import "Scene2ViewController.h"

@interface Scene2ViewController ()

@end

@implementation Scene2ViewController

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
    
    UIButton *btnTwo = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    btnTwo.frame = CGRectMake(40, 140, 240, 30);
    [btnTwo setTitle:@"vc2:v1" forState:UIControlStateNormal];
    //[btnTwo addTarget:self action:@selector(goToOne) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btnTwo];
    
    NSLog(@"scene 2 view");
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
