//
//  ViewController.m
//  AutoLayoutColor
//
//  Created by Gabriel Targon on 12/2/13.
//  Copyright (c) 2013 BEPID. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
//Criei propriedades


@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)sliderValueDidChange:(id)sender {
    //Muda a cor do fundo da View
    self.ViewColor.backgroundColor = [UIColor colorWithRed:self.sliderR.value
                                                     green:self.sliderG.value
                                                      blue:self.sliderB.value
                                                     alpha:1.0f];
    //Muda a cor do texto da Label
    self.LabelColor.textColor = [UIColor colorWithRed:self.sliderR.value
                                                      green:self.sliderG.value
                                                       blue:self.sliderB.value
                                                      alpha:1.0f];
}


@end
