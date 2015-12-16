//
//  ThunderBtnType1.swift
//  BodyIQRefApp
//
//  Created by Pablo Garcia-Morato on 11/30/15.
//  Copyright © 2015 Intel. All rights reserved.
//

import UIKit
import Foundation

class ThunderBtnType2: UIButton {

    required init?(coder aDecoder: NSCoder) {
        
        super.init(coder: aDecoder)
        
        // Button
        self.layer.cornerRadius     = 5.0;
        self.layer.borderColor      = UIColor.init(hex: Constants.SecondaryActionColor).CGColor
        self.layer.borderWidth      = 1.5
        self.backgroundColor        = UIColor.init(hex: Constants.SecondaryActionColor)
        self.tintColor              = UIColor.whiteColor()
        
        // Label
        self.titleLabel?.font       = UIFont(name: "HelveticaNeue", size: 17)
        self.titleLabel?.textColor  = UIColor(hex: Constants.BackgroundColor)
        
        // Shadow
        self.layer.shadowOffset     = CGSizeMake(1, 1)
        self.layer.shadowRadius     = 1
        self.layer.shadowColor      = UIColor.blackColor().CGColor
        self.layer.shadowOpacity    = 1.0
    }
}
