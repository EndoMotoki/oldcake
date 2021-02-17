//
//  ThirdViewController.swift
//  KOYOBUSNAVI
//
//  Created by EndoMotoki on 2/22/17.
//  Copyright © 2017 EndoMotoki. All rights reserved.
//

import UIKit
import WebKit

class ThirdViewController: UIViewController,WKUIDelegate,WKNavigationDelegate {
    var webView: WKWebView!
    
    @IBAction func backbtn(_ sender: Any) {
        self.webView?.goBack()
    }
    override func loadView() {
        super.loadView()
        let webConfiguration = WKWebViewConfiguration()
        webView = WKWebView(frame: .zero,configuration:webConfiguration)
        webView.uiDelegate = self
        webView.navigationDelegate = self
        self.view = webView
        if #available(iOS 9.0, *) {
            WKWebsiteDataStore.default().removeData(ofTypes: WKWebsiteDataStore.allWebsiteDataTypes(), modifiedSince: Date(timeIntervalSince1970:0), completionHandler: {})
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        let url = URL(string:"https://bus-news-ios.xmilkyway.com")
        let request = URLRequest(url: url!)
        webView.load(request)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
}
