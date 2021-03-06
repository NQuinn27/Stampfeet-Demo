//
//  ViewController.swift
//  StampfeetDemo
//
//  Created by niall quinn on 06/06/2017.
//  Copyright © 2017 Popdeem. All rights reserved.
//

import UIKit
import PopdeemSDK

class ViewController: UIViewController {

  override func viewDidLoad() {
    super.viewDidLoad()
    // Do any additional setup after loading the view, typically from a nib.
  }

  override func didReceiveMemoryWarning() {
    super.didReceiveMemoryWarning()
    self.title = "Stampfeet Demo"
    // Dispose of any resources that can be recreated.
  }

  @IBAction func launchPushed(_ sender: Any) {
    guard let navC: UINavigationController = self.navigationController else {
     return
    }
    PopdeemSDK.presentHomeFlow(in: navC)
  }
  
}

