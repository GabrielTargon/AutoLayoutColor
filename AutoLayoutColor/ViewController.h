//
//  ViewController.h
//  AutoLayoutColor
//
//  Created by Gabriel Targon on 12/2/13.
//  Copyright (c) 2013 BEPID. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
 * Esta classe foi criada para controlar a View e seus componentes
 */

@interface ViewController : UIViewController

///Slider (1) que seta a cor vermelha (RED)
@property (weak, nonatomic) IBOutlet UISlider *sliderR;
///Slider (2) que seta a cor verde (GREEN)
@property (weak, nonatomic) IBOutlet UISlider *sliderG;
///Slider (3) que seta a cor azul (BLUE)
@property (weak, nonatomic) IBOutlet UISlider *sliderB;
///View que muda a cor de acordo com os valores dos sliders
@property (weak, nonatomic) IBOutlet UIView *ViewColor;
///Label onde a cor da letra muda de acordo com os sliders
@property (weak, nonatomic) IBOutlet UILabel *LabelColor;

/**
 * Método muda a cor da view (ViewColor) de acordo com os valores dos sliders. 
   Só irá mudar quando um dos sliders mudar de valor.
 * @author Gabriel Targon
 */
- (IBAction)sliderValueDidChange:(id)sender;

@end
